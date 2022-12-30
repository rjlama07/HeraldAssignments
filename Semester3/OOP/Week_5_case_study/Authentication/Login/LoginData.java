
package Login;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class LoginData {
    private List<Map<String, String>> userData;

    {
        userData = new ArrayList<>();
        Map<String, String> admin = new HashMap<String, String>();
        admin.put("username", "@admin");
        admin.put("password", "password@123");
        admin.put("role", "Admin");
        userData.add(admin);

        Map<String, String> landlord = new HashMap<String, String>();
        landlord.put("username", "@landlord");
        landlord.put("password", "password@123");
        landlord.put("role", "Admin");
        userData.add(landlord);

        Map<String, String> tenant = new HashMap<String, String>();
        tenant.put("username", "@tenant");
        tenant.put("password", "password@123");
        tenant.put("role", "Admin");
        userData.add(tenant);

    }

    public List<Map<String, String>> getUserData() {
        return userData;
    }

}
