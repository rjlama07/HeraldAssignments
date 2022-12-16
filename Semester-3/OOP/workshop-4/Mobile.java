public class Mobile{

    String brand;
    boolean dualSim=false;
    String batteryCapacity;
   Mobile(){
    System.out.println("This is default constructor");
   };
   Mobile(String brand,boolean dualSim,String batteryCapacity){
    this.brand=brand;
    this.dualSim=dualSim;
    this.batteryCapacity=batteryCapacity;
   }
  

   void displayDetails(){
    if(brand==null )
    {
      System.out.println("Please specify the details first");
    }
    else{
    System.out.println(brand);
    System.out.println(dualSim?"Your phone is dual sim":"YOur phone is single sim");
    System.out.println("Battery capacity: "+batteryCapacity);
    }
   }

    void call(String np)
    {
        System.out.println(np+" is your network provider");
    }
    void call(){
        System.out.println("You haven't sepcified the provider");
    }

    public static void main(String[] args) {
        Mobile m1=new Mobile();
        m1.call();
        m1.call("Ncell");
        m1.displayDetails();
        Mobile m2=new Mobile("Apple",true,"2600 Mah");
        m2.displayDetails();
        
    }
}