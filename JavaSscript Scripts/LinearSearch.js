function linear()
{
    var n=parseInt(prompt("Enter the size of an array"));
    var a=new Array(n);
    var t=0;
    for(var i=0; i<a.length; i++)
    {
        a[i]=parseInt(prompt("Enter array elements"));
    }
    var k=parseInt(prompt("Enter the key element to search: "));
    for(var i=0; i<a.length; i++)
    {
        if(k==a[i])
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        document.writeln("Element "+a[i]+ " Found at Position:"+i);
    }
    else
    {
        document.writeln("Element Not Found");
    }
}