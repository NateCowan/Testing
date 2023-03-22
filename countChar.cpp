int countChar(string input, char target)
{
    int count = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == target)
        {
            count++;
        }
    }
    return count;
}
