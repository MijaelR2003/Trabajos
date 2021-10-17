using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TareaDeProgramacion
{
    public partial class Form8 : Form
    {
        public Form8()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double A = Convert.ToDouble(textBox1.Text);

            double elevadoAlCubo = Math.Pow(A, 3);

            textBox1.Text = "El número " + A + " elevado al cubo es: " + elevadoAlCubo.ToString();
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form8_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            double A = Convert.ToDouble(textBox1.Text);

            double elevadoAlCubo = Math.Pow(A, 3);

            textBox3.Text = "El número " + A + " elevado al cubo es: " + elevadoAlCubo.ToString();
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
