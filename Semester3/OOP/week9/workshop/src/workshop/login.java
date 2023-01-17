package workshop;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.BorderLayout;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class login {

	private JFrame frame;
	private JTextField userNameField;
	private JPasswordField passwordField;
	private JPasswordField confirmPasswordField;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					login window = new login();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public login() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 714, 460);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panel = new JPanel();
		frame.getContentPane().add(panel, BorderLayout.CENTER);
		panel.setLayout(null);
		
		JLabel lblUsername = new JLabel("Username");
		lblUsername.setBounds(190, 98, 64, 13);
		panel.add(lblUsername);
		frame.setVisible(true);
		userNameField = new JTextField();
		userNameField.setBounds(190, 121, 183, 19);
		panel.add(userNameField);
		userNameField.setColumns(10);
		
		JLabel lblNewLabel = new JLabel("Password");
		lblNewLabel.setBounds(190, 150, 97, 13);
		panel.add(lblNewLabel);
		
		passwordField = new JPasswordField();
		passwordField.setBounds(190, 168, 183, 19);
		panel.add(passwordField);
		
		JButton btnNewButton = new JButton("Sign in");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String usernameString=userNameField.getText();
				String password=new String(passwordField.getPassword());
				String confirmPassword=new String(confirmPasswordField.getPassword());
				
				if(password.equals(confirmPassword)&& password.length()>4)
				{
					new Dashboard(usernameString);
					frame.setVisible(false);
				}
				
				
			}
		});
		btnNewButton.setBounds(190, 244, 183, 21);
		panel.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("HomePage");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				new Home();
				frame.setVisible(false);
				
			}
		});
		btnNewButton_1.setBounds(190, 275, 188, 21);
		panel.add(btnNewButton_1);
		
		JLabel lblNewLabel_1 = new JLabel("Confirm Password");
		lblNewLabel_1.setBounds(190, 197, 128, 13);
		panel.add(lblNewLabel_1);
		
		confirmPasswordField = new JPasswordField();
		confirmPasswordField.setBounds(190, 220, 183, 19);
		panel.add(confirmPasswordField);
	}
}
