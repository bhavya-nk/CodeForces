string[] arr = Console.ReadLine().Split(" ");
int n = int.Parse(arr[0]);
int t = int.Parse(arr[1]);

char[] s = Console.ReadLine().ToCharArray();

for (int time = 0; time < t; time++)
{
    int i = 0;
    while (i < n - 1)
    {
        if (s[i] == 'B' && s[i + 1] == 'G')
        {
            char tmp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = tmp;

            i += 2;
        }
        else
        {
            i += 1;
        }
    }
}

Console.WriteLine(new string(s));
