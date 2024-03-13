//
//  eRPCTrigger.swift
//  eRPCMacOS
//
//  Created by Tu Che on 12/03/2024.
//

import Foundation


func triggerErpc() -> Int {
    let result = CPlusTest("20", 60)
//    _ = erpc.TCPTransport(true)
//    _ = erpc.Crc16()
    return Int(result.getAge())
}
