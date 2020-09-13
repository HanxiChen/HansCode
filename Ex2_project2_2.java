package Ex2;
class Car{
    //成员变量
    public String color;//颜色
    public String type;//类型

    //构造方法
    public Car(){
        this.color = "红色";
        this.type = "轿车";
    }
    public Car(String color, String type){
        this.color = color;
        this.type = type;
    }

    //成员方法
    public String gerColor(){
        return color;
    }
    public String getType(){
        return type;
    }
}

class Car1 extends Car{
    //成员变量
    private String factor;//工厂

    //构造方法
    public Car1(String color, String type, String factor){
        super(color,type);
        this.factor = factor;
    }
    public Car1(String color){
        this.color = color;
        this.factor = "广州本田";
    }
    public Car1(){
        this("红色");
    }

    //成员方法
    public String getFactor(){
        return factor;
    }


}
public class project2_2 {
    public static void main(String[] args){
        Car1 car1 = new Car1();
        Car1 car2 = new Car1("黑色");
        Car1 car3 = new Car1("蓝色","跑车","宝马");

        System.out.println("第一辆车" + car1.gerColor() + "，类型" + car1.getType() + ",生产商" + car1.getFactor());
        System.out.println("第二辆车" + car2.gerColor() + "，类型" + car2.getType() + ",生产商" + car2.getFactor());
        System.out.println("第三辆车" + car3.gerColor() + "，类型" + car3.getType() + ",生产商" + car3.getFactor());
    }
}
