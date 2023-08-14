namespace DAL;
  using BOL;
using MySql.Data.MySqlClient;
using System.Linq.Expressions;

public class DBConnector
{
    public static string constring = @"server=localhost; port=3306; user=root; password=root123; database=iacsd1";

    public static List<Customer> GetAllCust()
    {
        List<Customer> list = new List<Customer>();
        MySqlConnection conn = new MySqlConnection();
        conn.ConnectionString = constring;
        try
        {
            conn.Open();
            MySqlCommand cmd = conn.CreateCommand();
            string query = "select * from customer";
            cmd.CommandText = query;
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                int id = int.Parse(reader["id"].ToString());
                string name = reader["name"].ToString();

                Customer cust = new Customer
                {
                    id = id,
                    name = name
                };
                list.Add(cust);
            }
        } catch (Exception ex) {
            Console.WriteLine(ex.Message);
        }
        finally
        {
            conn.Close();
        }
        return list;
    }

    public static bool deleteCust(int id)
    {
        List<Customer> allCust = new List<Customer>();
        MySqlConnection conn = new MySqlConnection();
        conn.ConnectionString = constring;

        try
        {
            conn.Open();
            MySqlCommand cmd = conn.CreateCommand();
            string query = $"delete from customer where id={id}";
            cmd.CommandText = query;
      
            int RowsAffected = cmd.ExecuteNonQuery();
            return RowsAffected > 0;

        }
        catch(Exception ex)
        {
            Console.WriteLine(ex.Message);
        }
        finally
        {
            conn.Close();
        }
        return false;
    }
}