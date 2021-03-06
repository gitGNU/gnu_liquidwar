/********************************************************************/
/*                                                                  */
/*            L   I  QQ  U U I DD    W   W  A  RR    555            */
/*            L   I Q  Q U U I D D   W   W A A R R   5              */
/*            L   I Q  Q U U I D D   W W W AAA RR    55             */
/*            L   I Q Q  U U I D D   WW WW A A R R     5            */
/*            LLL I  Q Q  U  I DD    W   W A A R R   55             */
/*                                                                  */
/*                             b                                    */
/*                             bb  y y                              */
/*                             b b yyy                              */
/*                             bb    y                              */
/*                                 yy                               */
/*                                                                  */
/*                     U U       FFF  O   O  TTT                    */
/*                     U U       F   O O O O  T                     */
/*                     U U TIRET FF  O O O O  T                     */
/*                     U U       F   O O O O  T                     */
/*                      U        F    O   O   T                     */
/*                                                                  */
/********************************************************************/

/*****************************************************************************/
/* Liquid War is a multiplayer wargame                                       */
/* Copyright (C) 1998-2013 Christian Mauduit                                 */
/*                                                                           */
/* This program is free software; you can redistribute it and/or modify      */
/* it under the terms of the GNU General Public License as published by      */
/* the Free Software Foundation; either version 2 of the License, or         */
/* (at your option) any later version.                                       */
/*                                                                           */
/* This program is distributed in the hope that it will be useful,           */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/* GNU General Public License for more details.                              */
/*                                                                           */
/* You should have received a copy of the GNU General Public License         */
/* along with this program; if not, write to the Free Software               */
/* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */
/*                                                                           */
/* Liquid War homepage : http://www.ufoot.org/liquidwar/v5                   */
/* Contact author      : ufoot@ufoot.org                                     */
/*****************************************************************************/

/********************************************************************/
/* name          : wwwcli.h                                         */
/* content       : client code used to contact www.ufoot.org        */
/********************************************************************/

#ifndef LIQUID_WAR_INCLUDE_WWWCLI
#define LIQUID_WAR_INCLUDE_WWWCLI

/*==================================================================*/
/* includes                                                         */
/*==================================================================*/

#include "sockgen.h"
#include "base.h"

/*==================================================================*/
/* constants                                                        */
/*==================================================================*/

/*==================================================================*/
/* structs                                                          */
/*==================================================================*/

typedef struct
{
  char label[LW_SOCK_IP_SIZE + 1 + 33];
  char ip[LW_SOCK_IP_SIZE];
  int port;
  int uptime;
  int busy_players;
  int max_players;
  int password;
  char comment[COMMENT_SIZE + 1];
  int ping_delay;
}
LW_WWWCLI_DATA;

/*==================================================================*/
/* fonctions globales                                               */
/*==================================================================*/

int lw_wwwcli_get_games (LW_WWWCLI_DATA * buffer, int *size);

#endif
