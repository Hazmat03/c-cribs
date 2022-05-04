using System;

namespace Hueta
{
    class Prog
    {
        static void Main()
        {
            string Say()
            {
                string text;
                text = Console.ReadLine();
                return text;
            }

            string word = Say();
            Console.WriteLine(word + " World");
        }
    }
}
