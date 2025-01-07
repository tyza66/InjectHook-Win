using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace aHook
{
    public class Class1
    {
        public void ShowMessage()
        {       // 右键引用->添加引用->浏览->选择System.Windows.Forms.dll
            MessageBox.Show("OK","C# OK Title");
        }
    }
}
// 这样还不能直接注入运行，因为没有入口函数，所以需要一个C++入口函数
