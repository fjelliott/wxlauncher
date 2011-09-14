/*
 Copyright (C) 2009-2011 wxLauncher Team
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef FLAGLISTMANAGER_H
#define FLAGLISTMANAGER_H

#include <wx/wx.h>

/** Flag list box's draw status has changed.
 Whether the event IsChecked() indicates whether draw status is DRAW_OK. */
DECLARE_EVENT_TYPE(EVT_FLAG_LIST_BOX_DRAW_STATUS_CHANGED, wxID_ANY);

WX_DECLARE_LIST(wxEvtHandler, FlagListEventHandlers);

class FlagListManager {
private:
	FlagListManager();
	~FlagListManager();

public:
	static void RegisterFlagListBoxDrawStatusChanged(wxEvtHandler *handler);
	static void UnRegisterFlagListBoxDrawStatusChanged(wxEvtHandler *handler);
	static void GenerateFlagListBoxDrawStatusChanged(bool isDrawOK);
private:
	static FlagListEventHandlers FlagListBoxDrawStatusChangedHandlers;
};
#endif