int maxArea(int* height, int heightSize) {

    int max = 0;
    int i = 0;
    int j = heightSize - 1;

    while(i < j)
    {
        int h;

        if(height[i] < height[j])
            h = height[i];
        else
            h = height[j];

        int area = h * (j - i);

        if(area > max)
            max = area;

        if(height[i] < height[j])
            i++;
        else
            j--;
    }

    return max;
}