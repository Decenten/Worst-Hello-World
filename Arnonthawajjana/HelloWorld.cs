using System;
 
namespace HelloWorld
{
    class Program
    {
		public static bool CheckkerAndScold(string aaa, string bbb)
		{
			if (aaa != bbb)
			{
				Console.WriteLine("WHAT ARE YOU SERIOUS!!!!!!! JUST DAMN 'Hello World' YOU CAN'T EVENT TYPE IT Try Again!!");
				return true;
			}
			else
			{
				Console.WriteLine("That's better");
				return false;
			}
 
		}
		static void Main(string[] args)
		{
			string aaa = "Hello World";
			Console.WriteLine("Just Type \"Hello World\" Down here I will print it");
			string bbb = "";
			while (true)
			{
				bbb = Console.ReadLine();
				if (!CheckkerAndScold(aaa, bbb)) break;
			}
			Console.WriteLine("get lost!!!");
		}
	}
}