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
    public partial class Form11 : Form
    {
        public Form11()
        {
            InitializeComponent();
        }

        private void btncapicua_Click(object sender, EventArgs e)
        {
            int a, aux = 0, b = 0, z = 0;
            a = int.Parse(txtnumero.Text);
            aux = a;
            while (aux > 1)
            {
                b = aux % 10;
                aux = aux / 10;
                z = z * 10;
                z = z + b;
            }
            if (a == z)
            {
                lblresultado.Text = "El numero " + z + " es capicua ";
            }
            else {
                lblresultado.Text = "El numero " + a + " no es capicua ";
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
