const ll mx = 2e5+123;
ll arr[mx];
ll binarySearch(ll low,ll high,ll key)
{
    while(low<=high)
    {
        ll mid = (low+high)>>1;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low = mid+1;
        else if(arr[mid]>key)
            high = mid-1;
    }
    return -1;
}



/**
    // THIS IS ITERATIVE
    while(l<r)
    {
        m = (l+r+1)/2;
        if(b[m]==x)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if(b[m]>x)
        {
            r = m-1;
        }
        else if(b[m]<x)
            l = m+1;
        trace(l);
        trace(r);

    }*/




  /**
  	//THIS IS STL
    if(binary_search(b,b+a,x))
        cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;
	*/
