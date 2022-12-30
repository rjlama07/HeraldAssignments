package auth;

import java.util.List;
import java.util.Map;

import Login.LoginData;

public class Auth {
    private List<Map<String, String>> userData;

    public Auth() {
        LoginData login = new LoginData();
        this.userData = login.getUserData();
    }

    public String getUserRole(String username, String password) {
        for (Map<String, String> credential : userData) {
            if (credential.get("username").equals(username) && credential.get("password").equals(password)) {
                return credential.get("role");
            }
        }
        throw new RuntimeException();
    }

}