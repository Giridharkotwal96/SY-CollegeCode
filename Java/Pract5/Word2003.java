class Word2003 extends Word2000
{
	int year;
 	double price;
 	Word2003()
 	{
 		year = 2003;
 		price = 3200;
 	}
 	void display3()
 	{
 		super.display2();
 		System.out.println("word 2003 year :- "+year);
 	}

}