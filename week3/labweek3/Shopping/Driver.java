package labweek3.Shopping;

public class Driver {

	private static Cart testCart;

    public static void main(String[] args) {
      // create array list object       
      List arrlist = new ArrayList();
      
	cartItem A = new cartItem("toy", 23.5);
	cartItem B = new cartItem("toy2", 43.6);
	cartItem C = new cartItem("toy3", 54.3);

      	// populate the list
   	  arrlist.add("A");
   	  arrlist.add("B");
   	  arrlist.add("C");
      
      System.out.println("List elements before fill: "+arrlist);
      
      // fill the list with 'TP'
      Collection.fill(arrlist,"TP");
      
      System.out.println("List elements after fill: "+arrlist);    
    }

}

