namespace DAL.DisConnector;
using BOL;
using System.Data;
using MySql.Data.MySqlClient;



public class DBManager
{

    public static string conString = @"server=localhost;port=3306;user=root; password=root123;database=iacsd";
    public static List<Student> GetAllStudent()
    {
        List<Student> allStudent = new List<Student>();

        MySqlConnection con = new MySqlConnection();
        con.ConnectionString = conString;
        try
        {
            DataSet ds = new DataSet(); 
            MySqlCommand cmd = new MySqlCommand();
            cmd.Connection = con;
            string query = "SELECT * FROM student";
            cmd.CommandText = query;
     
            MySqlDataAdapter da = new MySqlDataAdapter();
            da.SelectCommand = cmd;
            da.Fill(ds);  

            DataTable dt = ds.Tables[0];
            DataRowCollection rows = dt.Rows;
            foreach (DataRow row in rows)
            {
                int id = int.Parse(row["id"].ToString());
                string name = row["FirstName"].ToString();
               
                Student dept = new Student
                {
                    Id = id,
                    FirstName = name
                   
                };
                allStudent.Add(dept);
            }
        }
        catch (Exception ee)
        {
            Console.WriteLine(ee.Message);
        }
        return allStudent;
    }
}

