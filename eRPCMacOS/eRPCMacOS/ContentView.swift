//
//  ContentView.swift
//  eRPCMacOS
//
//  Created by Tu Che on 12/03/2024.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack (spacing: CGFloat(triggerErpc())) {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundStyle(.tint)
            Text("ERPC FOR MAC")
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
