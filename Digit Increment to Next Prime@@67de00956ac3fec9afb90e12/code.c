// Your code here...
int nextPrimeDigit(int digit) 
{
    if (digit < 2) return 2;
    if (digit < 3) return 3;
    if (digit < 5) return 5;
    if (digit < 7) return 7;
    return 2;
}

int incrementToPrimeDigits(int num) 
{
    int result = 0, place = 1;
    if(num == 0)
        return 2;
    while (num > 0) 
    {
        int digit = num % 10;
        int newDigit = nextPrimeDigit(digit);
        result = result + (newDigit * place);
        place *= 10;
        num /= 10;
    }
    return result;
}