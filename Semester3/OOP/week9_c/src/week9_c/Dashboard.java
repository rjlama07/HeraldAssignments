package week9_c;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.BorderLayout;
import javax.swing.JLabel;
import java.awt.Color;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JLayeredPane;
import javax.swing.JTextField;

public class Dashboard {

	private JFrame frame;
	private JTextField textField;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Dashboard window = new Dashboard();
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
	public Dashboard() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 542, 356);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panel = new JPanel();
		frame.getContentPane().add(panel, BorderLayout.CENTER);
		panel.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("H@Ap");
		lblNewLabel.setFont(new Font("Segoe UI Variable", Font.BOLD, 20));
		lblNewLabel.setForeground(new Color(0, 0, 255));
		lblNewLabel.setBounds(10, 10, 78, 30);
		panel.add(lblNewLabel);
		
		JLabel lblRegister = new JLabel("Register");
		lblRegister.setFont(new Font("Times New Roman", Font.PLAIN, 18));
		lblRegister.setBounds(347, 18, 70, 20);
		panel.add(lblRegister);
		
		JLabel lblLogin = new JLabel("Login");
		lblLogin.setFont(new Font("Times New Roman", Font.PLAIN, 18));
		lblLogin.setBounds(427, 18, 70, 20);
		panel.add(lblLogin);
		
		JButton btnNewButton = new JButton("New button");
		btnNewButton.setBounds(10, 72, 101, 30);
		panel.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("New button");
		btnNewButton_1.setBounds(10, 118, 101, 30);
		panel.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("New button");
		btnNewButton_2.setBounds(10, 162, 101, 30);
		panel.add(btnNewButton_2);
		
		JButton btnNewButton_3 = new JButton("New button");
		btnNewButton_3.setBounds(10, 212, 101, 30);
		panel.add(btnNewButton_3);
		
		JLayeredPane layeredPane = new JLayeredPane();
		layeredPane.setBounds(131, 72, 387, 172);
		panel.add(layeredPane);
		layeredPane.setLayout(null);
		
		JPanel panel_2 = new JPanel();
		panel_2.setBounds(0, 0, 387, 172);
		layeredPane.add(panel_2);
		panel_2.setLayout(null);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(0, 0, 387, 172);
		panel_2.add(panel_1);
		panel_1.setLayout(null);
		
		JLabel lblPannLabel = new JLabel("Pann label");
		lblPannLabel.setBounds(135, 5, 81, 46);
		panel_1.add(lblPannLabel);
		
		textField = new JTextField();
		textField.setBounds(44, 10, 257, 120);
		panel_1.add(textField);
		textField.setColumns(10);
	}
}
