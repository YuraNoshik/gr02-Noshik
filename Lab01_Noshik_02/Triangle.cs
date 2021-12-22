using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;

namespace Lab01_Noshik_02
{
    internal class Triangle : Figure
    {
        float side;
        public PointF[] p = new PointF[3];       
        public void Set()
        {
            side = 100;
        }

        public override bool test(float x, float y)
        {

            return true;
        }
        
        public override void draw(Graphics g)
        {
            Set();
            p[0].X = pos_x;
            p[0].Y = pos_y;

            p[1].X = (float)(pos_x + side * -Math.Cos(0));
            p[1].Y = (float)(pos_y + side * -Math.Sin(0));

            p[2].X = (float)(pos_x + side * -Math.Cos(Math.PI / 3));
            p[2].Y = (float)(pos_y + side * -Math.Sin(Math.PI / 3));
            Pen pen = Pens.Black;
            if (selected == true) pen = Pens.Red;
            g.DrawPolygon(pen, p);
        }

    }
}
