using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp4
{
    public partial class Ejercicio_9 : Form
    {
        public Ejercicio_9()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double A = Convert.ToDouble(textBox1.Text);
            double B = Convert.ToDouble(textBox1.Text);

            double v = 0;

            v = A / B;

            textBox3.Text = "La velocidad es: " + v.ToString() + " m/s";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();

            Ejercicio_9 NuevaVentana = new Ejercicio_9();

            NuevaVentana.Show();
        }
    }
}
