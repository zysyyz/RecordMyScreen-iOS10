/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UITableViewCell.h>
#import "MediaPlayer-Structs.h"

@class MPTimeMarker, MPVideoChapterCellContentView;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView* _chapterContentView;
}
@property(retain, nonatomic) MPTimeMarker* timeMarker;
@property(assign, nonatomic) float timeColumnWidth;
@property(assign, nonatomic) BOOL showThumbnailColumn;
@property(assign, nonatomic) unsigned index;
@property(assign, nonatomic, getter=isCurrent) BOOL current;
-(instancetype)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
@end
