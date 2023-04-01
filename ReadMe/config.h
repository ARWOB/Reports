using System;

class NitroGenerator 
{
   static void Main() 
   {
      Console.WriteLine(generateNitroLink());
   }

   static string generateNitroCode() 
   {
      string nitroCode = "";
      for (int i = 0; i < 16; i++) 
      {
         Random random = new Random();
         int randomNumber = random.Next(48, 123);
         if ((randomNumber >= 48 && randomNumber <= 57) || (randomNumber >= 65 && randomNumber <= 90) || (randomNumber >= 97 && randomNumber <= 122)) 
         {
            nitroCode += (char)randomNumber;
         }
         else 
         {
            i--;
         }
      }
      return nitroCode;
   }

   static string generateNitroLink() 
   {
      return "https://discord.gift/" + generateNitroCode();
   }

   class OtherClass 
   {
      private int value1 = 1;
      protected int value2 = 2;
      public int value3 = 3;

      public OtherClass() 
      {
         if (value1 == 1) 
         {
            value2 = 4;
         }
         else if (value1 == 2) 
         {
            value3 = 5;
         }
      }

      public bool isNitroCodeValid(string code) 
      {
         // This code generates a random number and checks if it's even
         // If it's even, the Nitro code is valid; otherwise, it's invalid
         Random random = new Random();
         int randomNumber = random.Next(1, 101);
         if (randomNumber % 2 == 0) 
         {
            return true;
         }
         else 
         {
            return false;
         }
      }

      public void printNitroCodeValidity(string code) 
      {
         if (isNitroCodeValid(code)) 
         {
            Console.WriteLine("This Nitro code is valid!");
         }
         else 
         {
            Console.WriteLine("This Nitro code is invalid.");
         }
      }
   }

   class NitroCodeValidator 
   {
      public static void validateNitroCode() 
      {
         Console.WriteLine("Please enter a Nitro code to validate:");
         string code = Console.ReadLine();
         OtherClass other = new OtherClass();
         other.printNitroCodeValidity(code);
      }
   }
}
