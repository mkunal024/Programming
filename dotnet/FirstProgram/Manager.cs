public class Manager:Employee
{
    private int incentive{get;set;}
    public Manager():base(){
        incentive=0;
    }

    public Manager(int id, String nm, String add, int bsal,int hra, int da, int incentive):base(id,nm,add,bsal,hra,da)
    {
        this.incentive=incentive;
    }

    public override float ComputePay()
    {
        return base.ComputePay()+ incentive;
    }
     public override string ToString()
    {
        return base.ToString() + " incentive="+ incentive;
    }
}