int trap(int* height, int heightSize) {
    int l=0,r=heightSize-1;
    int lm=0,rm=0;
    int t=0;
    while(l<r)
    {
        if(height[l]<height[r])
        {
            if(height[l]>=lm)
            {
                lm=height[l];
            }
            else
            {
                t+=lm-height[l];
            }
            l++;
        }
        else
        {
            if(height[r]>=rm)
            {
                rm=height[r];
            }
            else
            {
                t+=rm-height[r];
            }
            r--;
        }
        
    }
    return t;
    
}