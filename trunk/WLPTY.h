//
//  XIPTY.h
//  Welly
//
//  Created by boost @ 9# on 7/13/08.
//  Copyright 2008 Xi Wang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WLProtocol.h"

@interface WLPTY : NSObject <WLProtocol> {
    pid_t _pid;
    int _fd;
    id _delegate;
    BOOL _connecting;
}
@property (readwrite, assign) id delegate;
@end