//
//  KOMouseHotspotHandler.h
//  Welly
//
//  Created by K.O.ed on 09-1-12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol KOMouseUpHandler
- (void) mouseUp: (NSEvent *)theEvent;
@end

@protocol KOUpdatable
- (void) update;
@end

@class YLView, KOMouseBehaviorManager;
@interface KOMouseHotspotHandler : NSResponder {
	YLView *_view;
	
	KOMouseBehaviorManager *_manager;
	int _maxRow, _maxColumn;
}

- (id) initWithView: (YLView *)view;
- (id) initWithManager: (KOMouseBehaviorManager *)manager;
- (void) mouseEntered: (NSEvent *)theEvent;
@end