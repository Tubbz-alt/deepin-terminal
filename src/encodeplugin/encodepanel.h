/*
 *  Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
 *
 * Author:zhangmeng <zhangmeng@uniontech.com>
 *
 * Maintainer:编码插件列表面板
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ENCODEPANEL_H
#define ENCODEPANEL_H

#include "rightpanel.h"

/*******************************************************************************
 1. @类名:    EncodePanel
 2. @作者:    ut001121 zhangmeng
 3. @日期:    2020-08-11
 4. @说明:
*******************************************************************************/

class EncodeListView;
class EncodePanel : public RightPanel
{
    Q_OBJECT
public:
    explicit EncodePanel(QWidget *parent = nullptr);
    /******** Add by nt001000 renfeixiang 2020-05-16:解决Alt+F2显示Encode时，高度变长的问题 Begin***************/
    void show();
    /******** Add by nt001000 renfeixiang 2020-05-16:解决Alt+F2显示Encode时，高度变长的问题 End***************/
    /******** Modify by ut000610 daizhengwen 2020-05-29: 根据焦点变换更新编码****************/
    void updateEncode(QString encode);
    /********************* Modify by ut000610 daizhengwen End ************************/

signals:
private:
    EncodeListView *m_encodeView = nullptr;
};

#endif  // THEMEPANEL_H
