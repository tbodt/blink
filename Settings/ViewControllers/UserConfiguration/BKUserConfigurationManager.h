////////////////////////////////////////////////////////////////////////////////
//
// B L I N K
//
// Copyright (C) 2016-2018 Blink Mobile Shell Project
//
// This file is part of Blink.
//
// Blink is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Blink is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Blink. If not, see <http://www.gnu.org/licenses/>.
//
// In addition, Blink is also subject to certain additional terms under
// GNU GPL version 3 section 7.
//
// You should have received a copy of these additional terms immediately
// following the terms and conditions of the GNU General Public License
// which accompanied the Blink Source Code. If not, see
// <http://www.github.com/blinksh/blink>.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
@import UIKit;

extern NSString *const BKUserConfigiCloud;
extern NSString *const BKUserConfigiCloudKeys;
extern NSString *const BKUserConfigAutoLock;
extern NSString *const BKUserConfigShowSmartKeysWithXKeyBoard;
extern NSString *const BKUserConfigMuteSmartKeysPlaySound;
extern NSString *const BKUserConfigChangedNotification;

@interface BKUserConfigurationManager : NSObject

+ (void)setUserSettingsValue:(BOOL)value forKey:(NSString *)key;
+ (BOOL)userSettingsValueForKey:(NSString *)key;
+ (UIKeyModifierFlags)shortCutModifierFlags;
+ (UIKeyModifierFlags)shortCutModifierFlagsForNextPrevShell;

+ (NSString *)UIKeyModifiersToString:(UIKeyModifierFlags) flags;

@end
