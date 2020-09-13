package FinalTest;
class Animal
{
    void play()
    {
        System.out.println("我是动物，我会很多本领");
    }
}
class Bird extends Animal
{
    void play()
    {
        System.out.println("我是小鸟，我能飞翔");
    }
}
class Fish extends Animal
{
    void play()
    {
        System.out.println("我是小鱼，我能游泳");
    }
}
public class Five_3Animal {
    public static void main(String[] args){
        Animal a1 = new Animal();
        a1.play();
        Bird b1 = new Bird();
        b1.play();
        Fish f1 = new Fish();
        f1.play();
    }


}
