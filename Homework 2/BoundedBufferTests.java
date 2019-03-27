public class BoundedBufferTest {

    public static void main(String[] args) {

      BoundedBuffer buff = new BoundedBuffer();
      buff.insert(50);
      buff.insert("hey");
      System.out.println(buff.retrieve());
      buff.insert(" ");
      System.out.println(buff.retrieve());
      buff.insert("Hi Dr. Johnson");
      System.out.println(buff.retrieve());
      buff.insert("1234567890");
      System.out.println(buff.retrieve());
      buff.insert(" ");
      buff.insert(new BoundedBuffer());
      buff.insert(" ");
      System.out.println(buff.retrieve());
      System.out.println(buff.retrieve());
      System.out.println(buff.retrieve());

    }
}
