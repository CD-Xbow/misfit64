/*  Maverick Model 3D
 * 
 *  Copyright (c) 2004-2007 Kevin Worcester
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, 
 *  USA.
 *
 *  See the COPYING file for full license text.
 */


#ifndef __MD3PROMPT_H
#define __MD3PROMPT_H

#include "md3prompt.base.h"
#include "modelfilter.h"
#include "md3filter.h"

#include <QtWidgets/QDialog>

class Model;

class Md3Prompt : public QDialog, public Ui::Md3PromptBase
{
   Q_OBJECT

   public:
      Md3Prompt();
      virtual ~Md3Prompt();

      void setOptions( Md3Filter::Md3Options * o, Model * model );
      void getOptions( Md3Filter::Md3Options * o );

   public slots:
      void helpNowEvent();

   protected:

};

bool md3prompt_show( Model * model, const char * const filename, ModelFilter::Options * o );

#endif // __MD3PROMPT_H
