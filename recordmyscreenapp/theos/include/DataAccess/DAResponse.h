/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAAction.h"


@interface DAResponse : DAAction {
	int _status;
}
-(instancetype)initWithAction:(int)action context:(id)context status:(int)status;
-(int)status;
@end
