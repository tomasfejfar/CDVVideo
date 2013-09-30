//
//  CDVVideo.h
//  
//
//  Updated by Tom Krones 2013-09-30.
//  Created by Peter Robinett on 2012-10-15.
//
//

#import <Cordova/CDV.h>
#import "MovieViewController.h"

@interface CDVVideo : CDVPlugin {
  MovieViewController *player;
  NSString *movie;
}

- (void) play:(CDVInvokedUrlCommand*)command;

@end