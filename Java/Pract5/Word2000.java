class Word2000 extends Word98
{
	int year;
 	double price;
 	Word2000()
 	{
 		year = 2000;
 		price = 3000;
 	}
 	void display2()
 	{
 		super.display1();
 		System.out.println("word 2000 year :- "+year);
 	}

}