{
  "interface_": {
    "operation": "SYSTEM",
    "portSpecifications": []
  },
  "blocks": [
    {
      "name": "read_distance",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -821.1328,
      "y": -534.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "screen_distance",
      "type": {
        "operation": "PORT_SYS_OUT",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -555.1328,
      "y": -517.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "Low Pass Filter1",
      "type": {
        "operation": "LOW_PASS_FILTER",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Coefficient",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": "1"
        }
      ],
      "x": -691.1328,
      "y": -529.0,
      "width": 60.0,
      "height": 40.0,
      "simuStartIndex": 0
    }
  ],
  "ios": [
    {
      "name": "read_distance",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -821.1328,
      "y": -534.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "screen_distance",
      "type": {
        "operation": "PORT_SYS_OUT",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -555.1328,
      "y": -517.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    }
  ],
  "connections": [
    {
      "sourceBlock": {
        "name": "read_distance",
        "type": {
          "operation": "PORT_SYS_IN",
          "portSpecifications": [
            {
              "name": "1",
              "direction": "OUT",
              "xRatio": 1.0,
              "yRatio": 0.5,
              "simuNumber": 0
            }
          ]
        },
        "attributes": [],
        "x": -821.1328,
        "y": -534.0,
        "width": 30.0,
        "height": 20.0,
        "simuStartIndex": 0
      },
      "sourcePortSpecification": {
        "name": "1",
        "direction": "OUT",
        "xRatio": 1.0,
        "yRatio": 0.5,
        "simuNumber": 0
      },
      "targetBlock": {
        "name": "Low Pass Filter1",
        "type": {
          "operation": "LOW_PASS_FILTER",
          "portSpecifications": [
            {
              "name": "1",
              "direction": "IN",
              "xRatio": 0.0,
              "yRatio": 0.5,
              "simuNumber": 0
            },
            {
              "name": "2",
              "direction": "OUT",
              "xRatio": 1.0,
              "yRatio": 0.5,
              "simuNumber": 0
            }
          ]
        },
        "attributes": [
          {
            "name": "Coefficient",
            "type": "http://www.w3.org/2001/XMLSchema#double",
            "value": "1"
          }
        ],
        "x": -691.1328,
        "y": -529.0,
        "width": 60.0,
        "height": 40.0,
        "simuStartIndex": 0
      },
      "targetPortSpecification": {
        "name": "1",
        "direction": "IN",
        "xRatio": 0.0,
        "yRatio": 0.5,
        "simuNumber": 0
      },
      "points": [
        -791.1328,
        -524.0,
        -741.1328,
        -524.0,
        -741.1328,
        -509.0,
        -691.1328,
        -509.0
      ]
    },
    {
      "sourceBlock": {
        "name": "Low Pass Filter1",
        "type": {
          "operation": "LOW_PASS_FILTER",
          "portSpecifications": [
            {
              "name": "1",
              "direction": "IN",
              "xRatio": 0.0,
              "yRatio": 0.5,
              "simuNumber": 0
            },
            {
              "name": "2",
              "direction": "OUT",
              "xRatio": 1.0,
              "yRatio": 0.5,
              "simuNumber": 0
            }
          ]
        },
        "attributes": [
          {
            "name": "Coefficient",
            "type": "http://www.w3.org/2001/XMLSchema#double",
            "value": "1"
          }
        ],
        "x": -691.1328,
        "y": -529.0,
        "width": 60.0,
        "height": 40.0,
        "simuStartIndex": 0
      },
      "sourcePortSpecification": {
        "name": "2",
        "direction": "OUT",
        "xRatio": 1.0,
        "yRatio": 0.5,
        "simuNumber": 0
      },
      "targetBlock": {
        "name": "screen_distance",
        "type": {
          "operation": "PORT_SYS_OUT",
          "portSpecifications": [
            {
              "name": "1",
              "direction": "IN",
              "xRatio": 0.0,
              "yRatio": 0.5,
              "simuNumber": 0
            }
          ]
        },
        "attributes": [],
        "x": -555.1328,
        "y": -517.0,
        "width": 30.0,
        "height": 20.0,
        "simuStartIndex": 0
      },
      "targetPortSpecification": {
        "name": "1",
        "direction": "IN",
        "xRatio": 0.0,
        "yRatio": 0.5,
        "simuNumber": 0
      },
      "points": [
        -631.1328,
        -509.0,
        -593.1328,
        -509.0,
        -593.1328,
        -507.0,
        -555.1328,
        -507.0
      ]
    }
  ]
}