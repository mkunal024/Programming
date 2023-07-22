namespace DAL.Connector;
using BOL;
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
            con.Open();
            MySqlCommand cmd = new MySqlCommand();
            cmd.Connection = con;
            string query = "SELECT * FROM student";
            cmd.CommandText = query;
            MySqlDataReader reader = cmd.ExecuteReader();
            while (reader.Read())
            {
                int id = int.Parse(reader["id"].ToString());
                string FirstName = reader["FirstName"].ToString();

                Student stu = new Student
                {
                    Id = id,
                    FirstName = FirstName,
          
                };
                allStudent.Add(stu);
            }
        }
        catch (Exception ee)
        {
            Console.WriteLine(ee.Message);
        }
        finally
        {
            con.Close();
        }

        return allStudent;
    }
}
