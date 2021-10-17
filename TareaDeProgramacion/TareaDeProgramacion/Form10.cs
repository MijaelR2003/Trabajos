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
    public partial class Form10 : Form
    {
        public Form10()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            double A = Convert.ToDouble(textBox1.Text);
            double B = Convert.ToDouble(textBox1.Text);

            double v = 0;

            v = A / B;

            textBox3.Text = "La velocidad es: " + v.ToString() + " m/s";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
