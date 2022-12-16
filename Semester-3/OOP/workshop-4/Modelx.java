
class MobilePhone{
    String model_number;
    MobilePhone(String model_number)
    {
        this.model_number=model_number;
    }
    public void printBrand()
    {
        System.out.println("this is brand");
    }
    final void printModelNumber(){
        System.out.println(model_number);
    }
}

 class Samsung extends MobilePhone{
    String brand;
    Samsung(String brand){
        super("XR");
        this.brand=brand;
    }
    @Override
    public void printBrand()
    {
        System.out.println("The brand is:"+brand);
    }
}


public class Modelx {
    public static void main(String[] args) {
        Samsung samsung=new Samsung("Apple");
        samsung.printBrand();
        samsung.printModelNumber();
    }
}
