void fill_array_random(int arr[], int n, int a, int b)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a,b);
    
    for(int i=0; i<n; ++i)
    {
        arr[i] = dist(rng);
    }
}