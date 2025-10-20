char *strrev(char *string)
{
        int start = 0;
        int end = 0;

        while(string[end])
                end++;
        end--;

        while(start < end)
        {
                char temp = string[end];
                string[end] = string[start];
                string[start] = temp;

                end--;
                start++;
        }
        return string;
}
