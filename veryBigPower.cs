using System;
using System.Collections;
using System.Numerics;

namespace prog
{
    class Program
    {

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            long n = long.Parse(s[0]);
            int k = int.Parse(s[1]);

            BigInteger res = 2;
            for (int i = 1; i < n; i++) res *= 2;

            string l = Convert.ToString(res);
            Console.WriteLine(l[l.Length - k - 1]);

        }
    }

}
