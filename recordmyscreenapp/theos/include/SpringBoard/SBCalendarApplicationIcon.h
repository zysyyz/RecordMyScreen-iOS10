/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationIcon.h"

@class SBCalendarIconContentsView;

@interface SBCalendarApplicationIcon : SBApplicationIcon {
	SBCalendarIconContentsView* _dateContents;
}
// inherited: -(instancetype)initWithApplication:(id)application;
// inherited: -(void)dealloc;
// inherited: -(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)updateInvitationBadge;
@end
