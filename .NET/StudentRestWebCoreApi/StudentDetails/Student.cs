namespace BOL;


public enum Course { DAC, DBDA, DITISS }
public class Student
{
 public int Id { get; set; }
public string? FirstName { get; set; }
public string? LastName { get; set; }
public Course Mycourse { get; set; }

public DateOnly Dob { get; set; }  
}