/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLTrackQueryImpl_SQL.h"
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface MLTrackQueryImpl_Array : MLTrackQueryImpl_SQL <NSCoding> {
}
-(void)dealloc;
-(void)evaluate;
-(void)freeQueryResults;
-(void)evaluateQuery:(id)query withEntities:(id)entities;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)encodeWithCoder:(id)coder;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
@end
