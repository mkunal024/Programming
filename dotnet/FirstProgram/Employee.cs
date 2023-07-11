public class Employee{
    private int empid{get;set;}
    private String name{get;set;}
    private String address{get;set;}
    private int BasicSalary{get;set;}
    private int HRA{get;set;}
    private int DA{get;set;}
      
      public Employee(){
        this.empid=0;
        this.name=null;
        this.address=null;
        this.BasicSalary=0;
        this.HRA=0;
        this.DA=0;
      }

      public Employee(int id,String nm,String add,int bsal,int hra,int da)
{
        this.empid=id;
        this.name=nm;
        this.address=add;
        this.BasicSalary=bsal;
        this.HRA=hra;
        this.DA=da;
}

  public virtual float ComputePay(){ 
   float sal=(DA * 25) + BasicSalary + HRA;
    return sal;
   }

public override string ToString()
{
    string str=string.Format("{0}, {1}, {2}, {3}, {4}, {5}",empid,name,address,BasicSalary,HRA,DA,ComputePay());
    return str;
}
}
