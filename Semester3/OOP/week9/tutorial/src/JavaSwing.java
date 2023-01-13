import javax.swing.*;

public class JavaSwing {
    void test() {
        System.out.println("Hello world");
    }

    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        JTextField t1, t2;
        t1 = new JTextField();
        t2 = new JTextField();
        JLabel jLabel1, jLabel2;
        jLabel1 = new JLabel("Email");
        jLabel2 = new JLabel("Password");
        jLabel1.setBounds(360, 25, 200, 30);
        jLabel2.setBounds(360, 75, 200, 30);
        t2.setBounds(360, 100, 400, 30);
        t1.setBounds(360, 50, 400, 30);
        jFrame.setVisible(true);
        jFrame.setSize(1280, 720);
        jFrame.setTitle("Course Management System");
        JButton jButton = new JButton("Submit");
        jButton.setBounds(360, 360, 400, 30);
        jFrame.setLayout(null);
        jFrame.add(jButton);
        jFrame.add(jLabel1);
        jFrame.add(jLabel2);
        jFrame.add(t1);
        jFrame.add(t2);

    }
}
