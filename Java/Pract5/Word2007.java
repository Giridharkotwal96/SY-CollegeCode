class Word2007 extends Word2003
{
	int year;
 	double price;
 	Word2007()
 	{
 		year = 2007;
 		price = 3220;
 	}
 	void display4()
 	{
 		super.display3();
 		System.out.println("word 2007 year :- "+year);
 	}

}