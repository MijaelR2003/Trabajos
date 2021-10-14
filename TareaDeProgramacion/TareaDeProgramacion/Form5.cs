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
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
        }

        private void txtejercicio_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            int N;
            string c;
            N = Convert.ToInt32(txtejercicio.Text);
            N = int.Parse(txtejercicio.Text);
            for (int i = 1; i <= N; i++)
            {
                if (N%i==0)
                {
                    c = Convert.ToString(i);
                    MessageBox.Show(c);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
