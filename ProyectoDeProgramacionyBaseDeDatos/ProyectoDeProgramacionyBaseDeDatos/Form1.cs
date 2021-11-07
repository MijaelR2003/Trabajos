using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace ProyectoDeProgramacionyBaseDeDatos
{
    public partial class Form1 : Form
    {
        static string conexionstring = "server = localhost; database = ProyectobaseProgra; integrated security = true";
        SqlConnection conexion = new SqlConnection(conexionstring);

        public Form1()
        {
            InitializeComponent();
        }
        public void login()
        {

            string contodo = "exec validar '" + txtusuarios.Text + "', '" + txtcontrasena.Text + "'";
            SqlCommand commantodo = new SqlCommand(contodo, conexion);
            SqlDataReader todo = commantodo.ExecuteReader();


            if (todo.Read())
            {
                Form2 hola = new Form2();
                hola.Show();
                this.Hide();
            }
            else
            {
                conexion.Close();
                lblerror.Text = "Contraseña o Usuario Incorrectos";
            }
        }

        private void btningresar_Click(object sender, EventArgs e)
        {
            conexion.Open();
            login();
        }

        private void btnsalir_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btnvercontra_Click(object sender, EventArgs e)
        {
            if (txtcontrasena.PasswordChar == '*')
            {
                txtcontrasena.PasswordChar = '\0';
            }
            else
            {
                txtcontrasena.PasswordChar = '*';
            }
        }
    }
}
